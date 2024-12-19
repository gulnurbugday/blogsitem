document.addEventListener("DOMContentLoaded", () => {
    const categories = document.querySelectorAll(".stars");

    categories.forEach((category) => {
        const stars = category.querySelectorAll("span");
        const result = document.getElementById(`${category.dataset.category}-result`);

        stars.forEach((star) => {
            star.addEventListener("click", () => {
                const rating = star.dataset.value;

                // Tüm yıldızların seçimini temizle
                stars.forEach((s) => s.classList.remove("selected"));

                // Seçilen yıldızlara kadar işaretle
                for (let i = 0; i < rating; i++) {
                    stars[i].classList.add("selected");
                }

                // Sonucu göster
                result.textContent = `${rating}/5 Yıldız olarak oy verdiniz.`;
            });
        });
    });
});
