//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariCore/NSCopying-Protocol.h>
#import <SafariCore/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURLProtectionSpace, WBSTOTPGenerator;

@protocol WBSSavedAccountSidecar <NSObject, NSCopying>
@property(readonly, copy, nonatomic) NSString *customTitle;
@property(readonly, copy, nonatomic) NSString *notesEntry;
@property(readonly, nonatomic) WBSTOTPGenerator *totpGenerator;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSURLProtectionSpace *protectionSpace;
@property(readonly, copy, nonatomic) NSString *user;
- (id)initWithUser:(NSString *)arg1 protectionSpace:(NSURLProtectionSpace *)arg2 dictionaryRepresentation:(NSDictionary *)arg3;
@end

