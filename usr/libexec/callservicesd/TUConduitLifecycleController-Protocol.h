//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol TUConduitLifecycleControllerDelegate;

@protocol TUConduitLifecycleController <NSObject>
@property(retain, nonatomic) id <TUConduitLifecycleControllerDelegate> delegate;
- (_Bool)shouldKeepConduitAlive;
@end

