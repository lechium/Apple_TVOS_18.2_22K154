//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameControllerFoundation/GCIUnknownObjC-Protocol.h>

@class NSString;

@protocol IOGCDeviceInterface <GCIUnknownObjC>
- (_Bool)setProperty:(NSString *)arg1 value:(id)arg2;
- (id)getProperty:(NSString *)arg1;
- (int)close:(unsigned int)arg1;
- (int)open:(unsigned int)arg1;
@end

