//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSCloudKitMirroringResult.h"

@class CKContainer, CKDatabase;

__attribute__((visibility("hidden")))
@interface NSCloudKitMirroringDelegateSetupResult : NSCloudKitMirroringResult
{
    CKContainer *_container;	// 8 = 0x8
    CKDatabase *_database;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x00000000002e36d8
- (id)initWithRequest:(id)arg1 storeIdentifier:(id)arg2 success:(_Bool)arg3 error:(id)arg4 container:(id)arg5 database:(id)arg6;	// IMP=0x00000000002e365f

@end

