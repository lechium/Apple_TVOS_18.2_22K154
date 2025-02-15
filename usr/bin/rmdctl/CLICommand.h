//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CLICommand : NSObject
{
    _Bool _successfulExit;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSArray *_aliases;	// 24 = 0x18
    NSArray *_options;	// 32 = 0x20
    NSString *_shortEnglishDescription;	// 40 = 0x28
    NSString *_longEnglishDescription;	// 48 = 0x30
    NSString *_usageLine;	// 56 = 0x38
    CDUnknownBlockType _executionBlock;	// 64 = 0x40
}

+ (_Bool)enabled;	// IMP=0x0020000000018518
+ (id)registeredCommandWithName:(id)arg1;	// IMP=0x001000000001a366
+ (id)registeredCommandNames;	// IMP=0x001000000001a34d
- (void).cxx_destruct;	// IMP=0x0020000000018ad0
@property(copy, nonatomic) CDUnknownBlockType executionBlock; // @synthesize executionBlock=_executionBlock;
- (CDUnknownBlockType);	// IMP=0x0010000000018ab7
@property(copy, nonatomic) NSString *usageLine; // @synthesize usageLine=_usageLine;
@property(copy, nonatomic) NSString *longEnglishDescription; // @synthesize longEnglishDescription=_longEnglishDescription;
@property(copy, nonatomic) NSString *shortEnglishDescription; // @synthesize shortEnglishDescription=_shortEnglishDescription;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(copy, nonatomic) NSArray *aliases; // @synthesize aliases=_aliases;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)endRunLoopWithSuccess:(_Bool)arg1;	// IMP=0x00100000000189da
- (_Bool)startRunLoop;	// IMP=0x001000000001898f
- (unsigned long long)hash;	// IMP=0x001000000001894b
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001887d
- (id)nameSummaryString;	// IMP=0x00100000000187a2
- (_Bool)runWithOptions:(id)arg1;	// IMP=0x0010000000018665
- (id)description;	// IMP=0x0010000000018520
- (void)register;	// IMP=0x001000000001a37f

@end

