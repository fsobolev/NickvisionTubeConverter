#pragma once

#include <string>
#include "mediafiletype.hpp"

namespace NickvisionTubeConverter::Models
{
	/**
	 * Themes for the application
	 */
	enum class Theme
	{
		System = 0,
		Light,
		Dark
	};

	/**
	 * A model for the settings of the application
	 */
	class Configuration
	{
	public:
		/**
		 * Constructs a Configuration (loading the configuraton from disk)
		 */
		Configuration();
		/**
		 * Gets the requested theme
		 *
		 * @returns The requested theme
		 */
		Theme getTheme() const;
		/**
		 * Sets the requested theme
		 *
		 * @param theme The new theme
		 */
		void setTheme(Theme theme);
		/**
		 * Gets the previous save folder used in a download
		 *
		 * @returns The previous save folder
		 */
		const std::string& getPreviousSaveFolder() const;
		/**
		 * Sets the previous save folder used in a download
		 *
		 * @param previousSaveFolder The new previous save folder
		 */
		void setPreviousSaveFolder(const std::string& previousSaveFolder);
		/**
		 * Gets the previous file type used in a download
		 *
		 * @returns The previous file type
		 */
		const MediaFileType& getPreviousFileType() const;
		/**
		 * Sets the previous file type used in a download
		 *
		 * @param previousFileType The new previous file type
		 */
		void setPreviousFileType(const MediaFileType& previousFileType);
		/**
		 * Gets whether or not to embed metadata in a download
		 *
		 * @returns True to embed, else false
		 */
		bool getEmbedMetadata() const;
		/**
		 * Sets whether or not to embed metadata in a download
		 *
		 * @param embedMetadata True to embed, else false
		 */
		void setEmbedMetadata(bool embedMetadata);
		/**
		 * Saves the configuration to disk
		 */
		void save() const;

	private:
		std::string m_configDir;
		Theme m_theme;
		std::string m_previousSaveFolder;
		MediaFileType m_previousFileType;
		bool m_embedMetadata;
	};
}