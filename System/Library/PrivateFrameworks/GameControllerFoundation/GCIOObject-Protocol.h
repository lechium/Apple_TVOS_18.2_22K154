//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameControllerFoundation/NSObject-Protocol.h>

@class NSString;
@protocol GCIOObject;

@protocol GCIOObject <NSObject>
+ (NSString *)className;
@property(readonly) NSString *className;
- (_Bool)isEqualTo:(id <GCIOObject>)arg1;
- (_Bool)conformsTo:(const char *)arg1;
@end

