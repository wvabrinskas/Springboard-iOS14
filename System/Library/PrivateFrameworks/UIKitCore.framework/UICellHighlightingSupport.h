/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface UICellHighlightingSupport : NSObject {

	CFDictionaryRef _unhighlightedStates;
	id _cell;

}
-(void)applyState:(unsigned long long)arg1 toView:(id)arg2 ;
-(void)highlightView:(id)arg1 ;
-(id)initWithCell:(id)arg1 ;
-(void)cacheState:(unsigned long long)arg1 forView:(id)arg2 ;
-(void)dealloc;
@end

