//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class NSUUID;

@interface AMSDLeaveMultiUserHomeTask : AMSTask
{
    NSUUID *_homeIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000029851
@property(readonly, nonatomic) NSUUID *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
- (id)_generateAppProvidedData;	// IMP=0x00100000000297d6
- (id)performTask;	// IMP=0x0010000000029035
- (id)initWithHomeIdentifier:(id)arg1;	// IMP=0x0010000000028fc7

@end

