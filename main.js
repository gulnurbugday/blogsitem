function showCategory(category) {
    const categoryDetails = document.getElementById("category-details");
    const categoryTitle = document.getElementById("category-title");
    const categoryDescription = document.getElementById("category-description");

    categoryDetails.style.display = "block";

    if (category === 'Müzik') {
        categoryTitle.textContent = "Müzik";
        categoryDescription.textContent = "Müzik kategorisinde, popüler şarkılar, albümler ve türleri keşfedin.";
    } else if (category === 'Filmler') {
        categoryTitle.textContent = "Filmler";
        categoryDescription.textContent = "Filmler kategorisinde, en yeni ve en popüler filmleri keşfedin.";
    } else if (category === 'Kitaplar') {
        categoryTitle.textContent = "Kitaplar";
        categoryDescription.textContent = "Kitaplar kategorisinde, en çok okunan kitapları inceleyin ve öneriler alın.";
    } else if (category === 'Yemek') {
        categoryTitle.textContent = "Yemek";
        categoryDescription.textContent = "Yemek kategorisinde, en lezzetli tarifler ve mutfak ipuçlarını keşfedin.";
    }
}

function hideCategory() {
    const categoryDetails = document.getElementById("category-details");
    categoryDetails.style.display = "none";
}

