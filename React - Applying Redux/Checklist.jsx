import React, { useState } from 'react';

const Checklist = () => {
  const [checkedItems, setCheckedItems] = useState({}); // State to track checkbox values

  const handleChange = (event) => {
    setCheckedItems({
      ...checkedItems,
      [event.target.name]: event.target.checked, // Update the checkbox value in state
    });
  };

  return (
    <div>
      <h2>Checklist</h2>
      <form>
        <label>
          <input
            type="checkbox"
            name="option1"
            checked={checkedItems.option1 || false} // Set checkbox value from state
            onChange={handleChange} // Call handleChange function on checkbox change
          />
          Option 1
        </label>
        <br />
        <label>
          <input
            type="checkbox"
            name="option2"
            checked={checkedItems.option2 || false}
            onChange={handleChange}
          />
          Option 2
        </label>
        <br />
        <label>
          <input
            type="checkbox"
            name="option3"
            checked={checkedItems.option3 || false}
            onChange={handleChange}
          />
          Option 3
        </label>
      </form>

      <h3>Selected Options:</h3>
      <ul>
        {Object.entries(checkedItems).map(([name, checked]) => (
          checked && <li key={name}>{name}</li> // Display selected options
        ))}
      </ul>
    </div>
  );
};

export default Checklist;