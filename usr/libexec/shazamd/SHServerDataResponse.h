//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SHServerDataResponse : NSObject
{
    NSArray *_dataArray;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001512e
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(readonly, copy, nonatomic) NSArray *hapticItemIDs;
@property(readonly, nonatomic) NSArray *shazamIDs;
- (id)initWithDataArray:(id)arg1;	// IMP=0x0010000000014ca6

@end

