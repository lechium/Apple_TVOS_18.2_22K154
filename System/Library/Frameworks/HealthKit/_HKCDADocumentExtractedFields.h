//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _HKCDADocumentExtractedFields : NSObject
{
    NSDate *_extractedDate;	// 8 = 0x8
    NSString *_extractedTitle;	// 16 = 0x10
    NSString *_extractedPatient;	// 24 = 0x18
    NSString *_extractedAuthorName;	// 32 = 0x20
    NSString *_extractedCustodianName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000c8972
@property(readonly, copy, nonatomic) NSString *extractedCustodianName; // @synthesize extractedCustodianName=_extractedCustodianName;
@property(readonly, copy, nonatomic) NSString *extractedAuthorName; // @synthesize extractedAuthorName=_extractedAuthorName;
@property(readonly, copy, nonatomic) NSString *extractedPatient; // @synthesize extractedPatient=_extractedPatient;
@property(readonly, copy, nonatomic) NSString *extractedTitle; // @synthesize extractedTitle=_extractedTitle;
@property(readonly, copy, nonatomic) NSDate *extractedDate; // @synthesize extractedDate=_extractedDate;
- (id)_parseCDADate:(id)arg1;	// IMP=0x00000000000c8799
- (id)_personNameFrom:(id)arg1 familyTagRule:(id)arg2 givenTagRule:(id)arg3 nilOnFail:(_Bool)arg4;	// IMP=0x00000000000c8597
- (id)_firstFrom:(id)arg1 tagRule:(id)arg2 nilOnFail:(_Bool)arg3;	// IMP=0x00000000000c84f7
- (void)extractHeaderFieldsFromDocumentData:(id)arg1;	// IMP=0x00000000000c8235
- (id)initWithDocumentData:(id)arg1;	// IMP=0x00000000000c81cd

@end

