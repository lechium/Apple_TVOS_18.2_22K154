//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, NSString;

@interface CKKSCloudKitDeletion : NSObject
{
    CKRecordID *_recordID;	// 8 = 0x8
    NSString *_recordType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000cab21
@property(retain) NSString *recordType; // @synthesize recordType=_recordType;
@property(retain) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (id)initWithRecordID:(id)arg1 recordType:(id)arg2;	// IMP=0x00100000000caa42

@end

