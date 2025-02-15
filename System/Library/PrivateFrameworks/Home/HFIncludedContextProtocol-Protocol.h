//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class NAFuture;

@protocol HFIncludedContextProtocol <NSObject>
- (NAFuture *)hf_updateValue:(_Bool)arg1 forContextType:(unsigned long long)arg2;
- (_Bool)hf_shouldHideForContextType:(unsigned long long)arg1;
- (_Bool)hf_shouldBeOnForContextType:(unsigned long long)arg1;
- (_Bool)hf_hasSetForContextType:(unsigned long long)arg1;
- (_Bool)hf_isOnForContextType:(unsigned long long)arg1;

@optional
- (NAFuture *)hf_updateValueForCurrentObjectOnly:(_Bool)arg1 forContextType:(unsigned long long)arg2;
@end

