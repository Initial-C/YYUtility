//
//  YYKit.h
//  YYKit <https://github.com/ibireme/YYKit>
//
//  Created by ibireme on 13/3/30.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <Foundation/Foundation.h>

#if __has_include(<YYUtility/YYUtility.h>)

// Utility
#import <YYUtility/YYAsyncLayer.h>
#import <YYUtility/YYDispatchQueuePool.h>
#import <YYUtility/YYFileHash.h>
#import <YYUtility/YYGestureRecognizer.h>
#import <YYUtility/YYKeychain.h>
#import <YYUtility/YYReachability.h>
#import <YYUtility/YYSentinel.h>
#import <YYUtility/YYThreadSafeArray.h>
#import <YYUtility/YYThreadSafeDictionary.h>
#import <YYUtility/YYTimer.h>
#import <YYUtility/YYTransaction.h>
#import <YYUtility/YYWeakProxy.h>

// UIKit Extension
#import <YYUtility/UIApplication+YYAdd.h>
#import <YYUtility/UIBarButtonItem+YYAdd.h>
#import <YYUtility/UIBezierPath+YYAdd.h>
#import <YYUtility/UIColor+YYAdd.h>
#import <YYUtility/UIControl+YYAdd.h>
#import <YYUtility/UIDevice+YYAdd.h>
#import <YYUtility/UIFont+YYAdd.h>
#import <YYUtility/UIGestureRecognizer+YYAdd.h>
#import <YYUtility/UIImage+YYAdd.h>
#import <YYUtility/UIScreen+YYAdd.h>
#import <YYUtility/UIScrollView+YYAdd.h>
#import <YYUtility/UITableView+YYAdd.h>
#import <YYUtility/UITextField+YYAdd.h>
#import <YYUtility/UIView+YYAdd.h>
// Quartz Extension
#import <YYUtility/CALayer+YYAdd.h>
#import <YYUtility/YYCGUtilities.h>
// Foundation Extension
#import <YYUtility/NSArray+YYAdd.h>
#import <YYUtility/NSBundle+YYAdd.h>
#import <YYUtility/NSData+YYAdd.h>
#import <YYUtility/NSDate+YYAdd.h>
#import <YYUtility/NSDictionary+YYAdd.h>
#import <YYUtility/NSKeyedUnarchiver+YYAdd.h>
#import <YYUtility/NSNotificationCenter+YYAdd.h>
#import <YYUtility/NSNumber+YYAdd.h>
#import <YYUtility/NSObject+YYAdd.h>
#import <YYUtility/NSObject+YYAddForKVO.h>
#import <YYUtility/NSString+YYAdd.h>
#import <YYUtility/NSTimer+YYAdd.h>
// no-arc
#import <YYUtility/NSObject+YYAddForARC.h>
#import <YYUtility/NSThread+YYAdd.h>

#else

// Utility
#import "YYAsyncLayer.h"
#import "YYDispatchQueuePool.h"
#import "YYFileHash.h"
#import "YYGestureRecognizer.h"
#import "YYKeychain.h"
#import "YYReachability.h"
#import "YYSentinel.h"
#import "YYThreadSafeArray.h"
#import "YYThreadSafeDictionary.h"
#import "YYTimer.h"
#import "YYTransaction.h"
#import "YYWeakProxy.h"

// UIKit Extension
#import "UIApplication+YYAdd.h"
#import "UIBarButtonItem+YYAdd.h"
#import "UIBezierPath+YYAdd.h"
#import "UIColor+YYAdd.h"
#import "UIControl+YYAdd.h"
#import "UIDevice+YYAdd.h"
#import "UIFont+YYAdd.h"
#import "UIGestureRecognizer+YYAdd.h"
#import "UIImage+YYAdd.h"
#import "UIScreen+YYAdd.h"
#import "UIScrollView+YYAdd.h"
#import "UITableView+YYAdd.h"
#import "UITextField+YYAdd.h"
#import "UIView+YYAdd.h"
// Quartz Extension
#import "CALayer+YYAdd.h"
#import "YYCGUtilities.h"
// Foundation Extension
#import "NSArray+YYAdd.h"
#import "NSBundle+YYAdd.h"
#import "NSData+YYAdd.h"
#import "NSDate+YYAdd.h"
#import "NSDictionary+YYAdd.h"
#import "NSKeyedUnarchiver+YYAdd.h"
#import "NSNotificationCenter+YYAdd.h"
#import "NSNumber+YYAdd.h"
#import "NSObject+YYAdd.h"
#import "NSObject+YYAddForKVO.h"
#import "NSString+YYAdd.h"
#import "NSTimer+YYAdd.h"
// no-arc
#import "NSObject+YYAddForARC.h"
#import "NSThread+YYAdd.h"
#endif
