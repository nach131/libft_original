const fs = require('fs').promises
const axios = require('axios');



async function getData(url){

	var config = {
		method: 'get',
		url: url,
		headers: { 
			// 'Authorization': 'Basic bmFjaDEzMTpnaHBfY3hMT0E2NFM5TGtqZURIV1lWUzFSWkh1UENZbGFLMFc0RGJ0'
			'Authorization': '${{ secrets.AUTH }}'
		}
	};
	const res = await axios(config)
  // console.log('after the call to service');
	// console.log(res.data.count)
  return (res.data.count);
}

console.log('${{ secrets.AUTH }}')
console.log(`${{ secrets.AUTH }}`)

// const TOTAL = "%{{total_views}}%"

(async()=>{
	const views = await getData('https://api.github.com/repos/nach131/libft/traffic/views');
	const clone = await getData('https://api.github.com/repos/nach131/libft/traffic/clones');
	const MarkdownTemplate = await fs.readFile('./README.md.tpl', { encoding: 'utf-8' })

	// console.log(views,clone)
	const newMarkdown = MarkdownTemplate
	.replace('total_views', views)
	.replace('total_clone', clone)
 	// console.log(newMarkdown);
	await fs.writeFile('./README.md', newMarkdown)
})();


