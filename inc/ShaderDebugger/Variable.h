#pragma once
#include <string>
#include <unordered_map>

namespace sd
{
	class Variable
	{
	public:
		Variable()
		{
			ID = 0;
			InputSlot = -1;
			Name = Type = "";
			Smooth = Flat = NoPerspective = false;
			IsArray = false;
			Storage = StorageType::None;
			Semantic = "";
		}

		enum class StorageType
		{
			None,
			Constant,
			In,
			Out,
			Attribute,
			Uniform,
			Varying,
			Buffer,
			Shared,
			InOut
		} Storage;

		size_t ID;

		int InputSlot;

		std::string Name;
		std::string Type;
		bool Smooth, Flat, NoPerspective;
		bool IsArray;
		std::string Semantic; // HLSL only
	};
}