//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface NLLogCategory : NSObject
{
    NSObject<OS_os_log> *_internal;	// 8 = 0x8
    NSString *_loggingCategory;	// 16 = 0x10
    NSString *_loggingSubsystem;	// 24 = 0x18
}

+ (id)_getCategory:(id)arg1;	// IMP=0x00600000000428b7
+ (void)_addCategory:(id)arg1 inSubsystem:(id)arg2;	// IMP=0x006000000004280a
+ (id)categoryWithName:(id)arg1 inSubsystem:(id)arg2;	// IMP=0x006000000004275d
+ (id)categoryWithName:(id)arg1;	// IMP=0x006000000004273d
+ (id)defaultCategory;	// IMP=0x006000000004271d
+ (void)initialize;	// IMP=0x00600000000426bd
- (void).cxx_destruct;	// IMP=0x0000000000042a22
@property(readonly, nonatomic) NSString *loggingSubsystem; // @synthesize loggingSubsystem=_loggingSubsystem;
@property(readonly, nonatomic) NSString *loggingCategory; // @synthesize loggingCategory=_loggingCategory;
@property(readonly, nonatomic) NSObject<OS_os_log> *internal; // @synthesize internal=_internal;
- (id)initCategory:(id)arg1 inSubsystem:(id)arg2;	// IMP=0x0000000000042921

@end

