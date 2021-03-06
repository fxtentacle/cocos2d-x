#ifndef __CC_APPLICATION_ANDROID_H__
#define __CC_APPLICATION_ANDROID_H__

#include "platform/CCCommon.h"
#include "platform/CCApplicationProtocol.h"

NS_CC_BEGIN

class CC_DLL Application : public ApplicationProtocol
{
public:
    /**
     * @js ctor
     */
    Application();
    /**
     * @js NA
     * @lua NA
     */
    virtual ~Application();

    /**
    @brief    Callback by Director to limit FPS.
    @param interval The time, expressed in seconds, between current frame and next.
    */
    void setAnimationInterval(double interval);

    /**
    @brief    Run the message loop.
    */
    int run();

    /**
    @brief    Get current application instance.
    @return Current application instance pointer.
    */
    static Application* getInstance();

    /** @deprecated Use getInstance() instead */
    CC_DEPRECATED_ATTRIBUTE static Application* sharedApplication();

    /**
    @brief Get current language config
    @return Current language config
    */
    virtual LanguageType getCurrentLanguage();
    
    /**
     @brief Get target platform
     */
    virtual Platform getTargetPlatform();

	/**
	@brief  This function will be called when the application screen size is changed.
	@param new width
	@param new height
	*/
	virtual void applicationScreenSizeChanged(int newWidth, int newHeight);

protected:
    static Application * sm_pSharedApplication;
};

NS_CC_END

#endif    // __CC_APPLICATION_ANDROID_H__
