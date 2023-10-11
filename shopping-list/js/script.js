const list = document.getElementById('shoppingList');
const itemInput = document.getElementById("item");

const pushItem = () => {
  const newItemText = itemInput.value.trim();

  if(newItemText != ""){
    const items = document.createElement('li')
    items.textContent = newItemText;
    list.append(items);
    let deleteButton = document.createElement("button");
    deleteButton.addEventListener("click", function() {
      items.remove();
    });
    deleteButton.innerHTML = "Delete";
    items.appendChild(deleteButton);
    
  }
}