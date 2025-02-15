//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPEvent;

__attribute__((visibility("hidden")))
@interface LPFetcher : NSObject
{
    unsigned int _loggingID;	// 8 = 0x8
    LPEvent *_event;	// 16 = 0x10
    id _userData;	// 24 = 0x18
    Class _responseClass;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002d0b5
@property(retain, nonatomic) Class responseClass; // @synthesize responseClass=_responseClass;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(retain, nonatomic) LPEvent *_event; // @synthesize _event;
@property(readonly, nonatomic) unsigned int _loggingID; // @synthesize _loggingID;
- (void)cancel;	// IMP=0x000000000002d055
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d045
- (id)init;	// IMP=0x000000000002cfe6

@end

