//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface CPLCloudKitOperationGroupMapper : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSDictionary *_operationGroupMapping;	// 16 = 0x10
    _Bool _operationGroupMappingIsInited;	// 24 = 0x18
    NSURL *_mappingURL;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000043a4b
@property(readonly, nonatomic) NSURL *mappingURL; // @synthesize mappingURL=_mappingURL;
@property(readonly, nonatomic) NSArray *mappingList;
- (id)groupNameForGroupName:(id)arg1;	// IMP=0x00100000000435c4
- (id)initWithMappingInFolderWithURL:(id)arg1;	// IMP=0x001000000004314f
- (id)initWithMappingAtURL:(id)arg1;	// IMP=0x00100000000430d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

