/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FAFamilySetupPrompterDelegate.h>

@protocol AAUIFamilySetupPrompterDelegate;
@class FAFamilySetupPrompter, NSString;

@interface AAUIFamilySetupPrompter : NSObject <FAFamilySetupPrompterDelegate> {

	FAFamilySetupPrompter* _familySetupPrompter;
	id<AAUIFamilySetupPrompterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIFamilySetupPrompterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<AAUIFamilySetupPrompterDelegate>)delegate;
-(void)setDelegate:(id<AAUIFamilySetupPrompterDelegate>)arg1 ;
-(id)initWithiTunesAccount:(id)arg1 ;
-(void)promptIfEligibleWithPresentingViewController:(id)arg1 isFirstRun:(BOOL)arg2 ;
-(void)familySetupPrompterDidFinish:(id)arg1 ;
@end
