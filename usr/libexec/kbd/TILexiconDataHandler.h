//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface TILexiconDataHandler : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000007b20
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (MISSING_TYPE *)addEntryString:forRecentInputIdentifier: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000079db
- (_Bool)checkEntitlementForAddEntryStringWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x00100000000079d3
- (void)requestRemovalOfLexiconForRecentInputIdentifier:(id)arg1;	// IMP=0x0010000000007929
- (void)requestLexiconForRecentInputIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007851
- (void)requestLexiconFromBundlePath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000072bd
- (void)addContact:(id)arg1 toEntries:(id)arg2 usingTokenizer:(id)arg3;	// IMP=0x001000000000704a
- (void)finishRequestWithEntries:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006f70
- (_Bool)validateBundlePath:(id)arg1;	// IMP=0x0010000000006d74

@end

