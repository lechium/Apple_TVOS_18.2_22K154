//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString;

__attribute__((visibility("hidden")))
@interface CATSharingCloseMessage : NSObject
{
    NSError *_closeError;	// 8 = 0x8
}

+ (id)instanceWithDictionary:(id)arg1;	// IMP=0x001000000000fe13
- (void).cxx_destruct;	// IMP=0x000000000000fed5
@property(readonly, nonatomic) NSError *closeError; // @synthesize closeError=_closeError;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly, nonatomic) long long messageType;
- (id)initWithError:(id)arg1;	// IMP=0x000000000000fd17

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

