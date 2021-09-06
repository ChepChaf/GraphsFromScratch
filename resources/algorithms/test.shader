function calculatePixel(scene, d)
    closest_t = scene.tMax
    closest_object = nil

    for i, object in ipairs(scene.objects) do
        t1, t2 = object:intersectRay(scene.cameraOrigin, d)

        if t1 > scene.tMin and t1 < scene.tMax and t1 < closest_t then
            closest_t = t1
            closest_object = object
        end

        if t2 > scene.tMin and t2 < scene.tMax and t2 < closest_t then
            closest_t = t2
            closest_object = object
        end
    end

    if closest_object == nil then
        return color.new(255, 255, 255)
    end

    return closest_object.color
end

function canvasToViewPort(x, y, width, height)
    return vec3.new(x / width, y / height, 1)
end

function render(scene, width, height)
    img = {}

    for x = -width/2, width/2 do
        for y = -height/2, height/2 do
            d = canvasToViewPort(x,  y, width, height)

            c = calculatePixel(scene, d)

            table.insert(img, c)
        end
    end

    return img
end

