/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TeaUI/TeaUI-Structs.h>
#import <libobjc.A.dylib/TUPluggableDelegate.h>

@interface TSPlugin : NSObject <TUPluggableDelegate> {

	 identifier;
	 delegate;
	 viewController;
	 layoutRevision;
	 layoutRevisionLock;
	 previousSize;
	 previousSizeLock;

}
-(void)pluggableViewController:(id)arg1 didChangeSizeTo:(CGSize)arg2 ;
-(id)init;
-(void)initializeWithCompletion:(/*^block*/id)arg1 ;
-(void)relayoutWithCompletion:(/*^block*/id)arg1 ;
@end
