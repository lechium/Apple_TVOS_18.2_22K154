//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSString;

@interface IDSGetFeatureToggleStateMessage : FTIDSMessage
{
    NSString *_featureID;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x0020000000344f3a
@property(retain, nonatomic) NSString *featureID; // @synthesize featureID=_featureID;
- (id)messageBody;	// IMP=0x0010000000344e36
- (id)requiredKeys;	// IMP=0x0010000000344dfc
- (id)bagKey;	// IMP=0x0010000000344def
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000344d78

@end

