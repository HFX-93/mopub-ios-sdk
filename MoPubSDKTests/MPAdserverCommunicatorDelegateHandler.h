//
//  MPAdServerCommunicatorDelegateHandler.h
//
//  Copyright 2018-2020 Twitter, Inc.
//  Licensed under the MoPub SDK License Agreement
//  http://www.mopub.com/legal/sdk-license-agreement/
//

#import <Foundation/Foundation.h>
#import "MPAdServerCommunicator.h"

@interface MPAdServerCommunicatorDelegateHandler : NSObject <MPAdServerCommunicatorDelegate>

@property (nonatomic, copy) void (^communicatorDidReceiveAdConfigurations)(NSArray<MPAdConfiguration *> *configurations);
@property (nonatomic, copy) void (^communicatorDidFailWithError)(NSError *error);
@property (nonatomic, assign) BOOL isFullscreenAd;
@property (nonatomic, copy) NSString *adUnitId;

@end
