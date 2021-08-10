//
//  ConnectSDKFramework.h
//  ConnectSDKFramework
//
//  Created by Nguyen Ngoc Diep on 2021/08/10.
//  Copyright © 2021 LG Electronics. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "DiscoveryManager.h"
#import "DiscoveryManagerDelegate.h"
#import "DiscoveryProviderDelegate.h"

#import "ConnectableDevice.h"
#import "ConnectableDeviceDelegate.h"

#import "DevicePicker.h"
#import "DevicePickerDelegate.h"

#import "ServiceAsyncCommand.h"
#import "ServiceCommand.h"
#import "ServiceCommandDelegate.h"
#import "ServiceSubscription.h"

#import "CapabilityFilter.h"
#import "ExternalInputControl.h"
#import "KeyControl.h"
#import "TextInputControl.h"
#import "Launcher.h"
#import "MediaControl.h"
#import "PlayListControl.h"
#import "MediaPlayer.h"
#import "MouseControl.h"
#import "PowerControl.h"
#import "SubtitleInfo.h"
#import "ToastControl.h"
#import "TVControl.h"
#import "VolumeControl.h"
#import "WebAppLauncher.h"

#import "AppInfo.h"
#import "ChannelInfo.h"
#import "ExternalInputInfo.h"
#import "ImageInfo.h"
#import "MediaInfo.h"
#import "TextInputStatusInfo.h"
#import "ProgramInfo.h"
#import "LaunchSession.h"
#import "WebAppSession.h"

@interface ConnectSDKFramework : NSObject

@end
//! Project version number for ConnectSDKFramework.
FOUNDATION_EXPORT double ConnectSDKFrameworkVersionNumber;

//! Project version string for ConnectSDKFramework.
FOUNDATION_EXPORT const unsigned char ConnectSDKFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ConnectSDKFramework/PublicHeader.h>

