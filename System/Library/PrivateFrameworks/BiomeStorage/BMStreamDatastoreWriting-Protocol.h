//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStorage/NSObject-Protocol.h>

@protocol BMStoreData;

@protocol BMStreamDatastoreWriting <NSObject>
- (_Bool)writeEventWithEventBody:(id <BMStoreData>)arg1 timestamp:(double)arg2 outEventSize:(unsigned long long *)arg3;
@end

