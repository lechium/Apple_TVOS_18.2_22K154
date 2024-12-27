//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, SAMLNameId;

__attribute__((visibility("hidden")))
@interface SAMLSubjectConfirmation
{
}

+ (id)createElement:(id *)arg1;	// IMP=0x006000000000e0e5
@property(readonly, nonatomic) NSString *address;
@property(readonly, nonatomic) NSString *inResponseTo;
@property(readonly, nonatomic) NSString *recipient;
@property(readonly, nonatomic) NSDate *notOnOrAfter;
@property(readonly, nonatomic) NSDate *notBefore;
@property(readonly, nonatomic) SAMLNameId *nameId;
@property(readonly, nonatomic) NSString *method;
- (struct _xmlNode *)xmlNode:(id *)arg1;	// IMP=0x000000000000e158

@end

