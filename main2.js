document.addEventListener("DOMContentLoaded", () => {
    const categories = document.querySelectorAll(".stars");

    categories.forEach((category) => {
        const stars = category.querySelectorAll("span");
        const result = document.getElementById(`${category.dataset.category}-result`);

        stars.forEach((star) => {
            star.addEventListener("click", () => {
                const rating = star.dataset.value;

                stars.forEach((s) => s.classList.remove("selected"));

                for (let i = 0; i < rating; i++) {
                    stars[i].classList.add("selected");
                }

                result.textContent = `${rating}/5 Yıldız olarak oy verdiniz.`;
            });
        });
    });
});
