//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CTXPCWebsheetInfoResponse
{
}

+ (id)allowedClassesForArguments;	// IMP=0x00600000000590f0
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSDictionary *postdata;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *urlString;
- (id)initWithURL:(id)arg1 postdata:(id)arg2;	// IMP=0x0000000000058cba
- (id)initWithURLString:(id)arg1 postdata:(id)arg2 type:(id)arg3;	// IMP=0x0000000000058b8a
- (id)initWithURLString:(id)arg1 postdata:(id)arg2;	// IMP=0x0000000000058b75

@end

