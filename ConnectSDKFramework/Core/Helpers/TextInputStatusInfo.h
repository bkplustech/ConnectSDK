//
//  TextInputStatusInfo.h
//  Connect SDK
//
//  Created by Jeremy White on 1/23/14.
//  Copyright (c) 2014 LG Electronics.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


/*! Normalized reference object for information about a text input event. */
@interface TextInputStatusInfo : NSObject

/*! Type of keyboard that should be displayed to the user. */
@property (nonatomic) UIKeyboardType keyboardType;

/*! Whether the keyboard is/should be visible to the user. */
@property (nonatomic) BOOL isVisible;

/*! Raw data from the first screen device about the text input status. In most cases, this is an NSDictionary. */
@property (nonatomic, strong) id rawData;

@end
