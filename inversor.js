let string = "string daora";
let res = Array(string.length);

for(let i = 0; i < string.length; i++){
	res[res.length - 1 - i] = string[i];
}

console.log(res.join(""));
