//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber, NSString;

@interface CPLCKPhotosSharedLibraryExitMoveBatchFeedbackItem : NSObject
{
    MISSING_TYPE *originRecordID;	// 8 = 0x8
    MISSING_TYPE *destinationRecordID;	// 24 = 0x18
    MISSING_TYPE *errorMessage;	// 40 = 0x28
    MISSING_TYPE *errorCode;	// 56 = 0x38
    MISSING_TYPE *errorDomain;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0040000000138d50
- (id)init;	// IMP=0x0010000000138c50
@property(nonatomic, copy) NSString *errorDomain;
@property(nonatomic, retain) NSNumber *errorCode; // @synthesize errorCode;
@property(nonatomic, copy) NSString *errorMessage;
@property(nonatomic, copy) NSString *destinationRecordID;
@property(nonatomic, copy) NSString *originRecordID;

@end

