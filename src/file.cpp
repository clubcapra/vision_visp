#include <iostream>
#include <string>

#include "file.hh"


boost::filesystem::path
getInitFileFromModelName (const std::string& modelName,
			  const std::string& defaultPath)
{
  boost::filesystem::path res(defaultPath);
  res /= modelName;
  res /= modelName + ".init";
  return res;
}

boost::filesystem::path
getModelFileFromModelName (const std::string& modelName,
			   const std::string& defaultPath)
{
  boost::filesystem::path res(defaultPath);
  res /= modelName;
  res /= modelName + ".wrl";
  return res;
}

boost::filesystem::path
getConfigurationFileFromModelName (const std::string& modelName,
				   const std::string& defaultPath)
{
  boost::filesystem::path res(defaultPath);
  res /= modelName;
  res /= modelName + ".xml";
  return res;
}

boost::filesystem::path
getInitialPoseFileFromModelName (const std::string& modelName,
				 const std::string& defaultPath)
{
  boost::filesystem::path res(defaultPath);
  res /= modelName;
  res /= modelName + ".0.pos";
  return res;
}
