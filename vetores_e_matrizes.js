let nomesPokemon = ["Pikachu", "Charmander", "Bulbassaur"]
let timePokemon = [
    ["Pikachu", "M", 1],
    ["Charmander", "F", 3],
    ["Bulbassaur", "M", 4],
    ["Gyarados", "M", 6]
]

console.log(" Seu time é formado pelos seguintes pokémon " + timePokemon[0][0] + " " + timePokemon[1][0] + " " + timePokemon[2][0] + " " + timePokemon[3][0])


let inventario = [
    ["Espada de madeira", "Escudo", "Poção de cura"],
    [99]

]
let moedasColetadas = inventario[1][0]
let item = "Peitoral de Aço"
let consegueComprar = (moedasColetadas >=100) && (item === "Peitoral de Aço"
)

console.log(consegueComprar)