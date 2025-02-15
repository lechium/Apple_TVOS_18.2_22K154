//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SHMediaLibraryInfoFetcher : NSObject
{
}

+ (long long)libraryStatusForAccountStatus:(long long)arg1;	// IMP=0x0040000000047e34
- (void)clearCachedSyncStatus;	// IMP=0x002000000004796c
@property(copy, nonatomic) NSString *currentUserID;
- (void)fetchAccountTokensWithAccountInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000047420
- (void)fetchLibraryInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000047132

@end

