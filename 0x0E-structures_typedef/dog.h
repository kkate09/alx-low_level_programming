#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing a dog
 * @name: A pointer to the name of the dog
 * @age: The age of the dog
 * @owner: A pointer to the name of the dog's owner
 *
 * Description: A type describing a dog with its name, age, and owner's name.
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} Dog;

#endif /* DOG_H */
