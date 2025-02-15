//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface PBCriticalAlertContext : NSObject
{
    _Bool _expectsEventForwarding;	// 8 = 0x8
    UIViewController *_viewController;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    Class _viewControllerClass;	// 32 = 0x20
}

+ (id)thermalContext;	// IMP=0x0040000000192906
+ (id)contextWithViewController:(id)arg1;	// IMP=0x0010000000192848
- (void).cxx_destruct;	// IMP=0x002000000019299a
@property(nonatomic) _Bool expectsEventForwarding; // @synthesize expectsEventForwarding=_expectsEventForwarding;
@property(readonly, nonatomic) Class viewControllerClass; // @synthesize viewControllerClass=_viewControllerClass;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)initWithIdentifier:(id)arg1 viewControllerClass:(Class)arg2;	// IMP=0x00100000001927c9
- (id)initWithIdentifier:(id)arg1 viewController:(id)arg2;	// IMP=0x0010000000192730

@end

