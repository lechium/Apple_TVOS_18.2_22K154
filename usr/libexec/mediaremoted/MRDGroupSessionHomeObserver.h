//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface MRDGroupSessionHomeObserver : NSObject
{
    MISSING_TYPE *managerWrapper;	// 8 = 0x8
}

+ (id)shared;	// IMP=0x0020000000296bf0
- (void).cxx_destruct;	// IMP=0x0040000000298760
- (id)init;	// IMP=0x00100000002986b0
- (void)currentUserHomeIdentifiersWithCompletionHandler:(void (^)(NSSet *))arg1;	// IMP=0x0010000000298460
- (void)currentHomeUserIdentifiersWithCompletionHandler:(void (^)(NSSet *))arg1;	// IMP=0x0010000000297ff0

@end

