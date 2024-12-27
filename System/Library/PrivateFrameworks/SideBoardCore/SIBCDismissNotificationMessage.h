//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SIBCDismissNotificationMessage : NSObject
{
    NSString *_applicationId;	// 8 = 0x8
    NSString *_foregroundApp;	// 16 = 0x10
}

+ (id)messageId;	// IMP=0x001000000000c92d
- (void).cxx_destruct;	// IMP=0x000000000000ca0b
@property(readonly, nonatomic) NSString *foregroundApp; // @synthesize foregroundApp=_foregroundApp;
@property(readonly, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
@property(readonly, copy) NSString *description;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x000000000000c596
- (id)dictionaryEncoding;	// IMP=0x000000000000c58e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

