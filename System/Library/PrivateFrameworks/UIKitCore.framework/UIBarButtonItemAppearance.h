/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol _UIBarButtonItemAppearanceChangeObserver;
@class _UIBarButtonItemData, UIBarButtonItemStateAppearance;

@interface UIBarButtonItemAppearance : NSObject <NSCopying, NSSecureCoding> {

	id<_UIBarButtonItemAppearanceChangeObserver> _changeObserver;
	_UIBarButtonItemData* _data;
	UIBarButtonItemStateAppearance* _states[4];

}

@property (nonatomic,readonly) _UIBarButtonItemData * _data;                                                                              //@synthesize data=_data - In the implementation block
@property (assign,setter=_setChangeObserver:,nonatomic,__weak) id<_UIBarButtonItemAppearanceChangeObserver> _changeObserver;              //@synthesize changeObserver=_changeObserver - In the implementation block
@property (setter=_setFallback:,nonatomic,retain) id<_UIBarButtonItemDataFallback> _fallback; 
@property (nonatomic,readonly) UIBarButtonItemStateAppearance * normal; 
@property (nonatomic,readonly) UIBarButtonItemStateAppearance * highlighted; 
@property (nonatomic,readonly) UIBarButtonItemStateAppearance * disabled; 
@property (nonatomic,readonly) UIBarButtonItemStateAppearance * focused; 
+(BOOL)supportsSecureCoding;
-(void)_setChangeObserver:(id)arg1 ;
-(void)_setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2 ;
-(id)init;
-(unsigned long long)hash;
-(void)_writeToStorage:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setFallback:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)configureWithDefaultForStyle:(long long)arg1 ;
-(void)_resetBackIndicatorImages;
-(_UIBarButtonItemData *)_data;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(UIBarButtonItemStateAppearance *)disabled;
-(id<_UIBarButtonItemAppearanceChangeObserver>)_changeObserver;
-(void)_setData:(id)arg1 ;
-(void)_updateDataTo:(id)arg1 signal:(BOOL)arg2 ;
-(UIBarButtonItemStateAppearance *)highlighted;
-(void)_updateToSupportBackIndicatorsCopyingIndicatorsAndFallbackFrom:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_proxyForState:(long long)arg1 ;
-(UIBarButtonItemStateAppearance *)focused;
-(id)initWithBarButtonItemAppearance:(id)arg1 ;
-(id<_UIBarButtonItemDataFallback>)_fallback;
-(UIBarButtonItemStateAppearance *)normal;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_describeInto:(id)arg1 ;
-(id)copy;
-(void)dealloc;
@end

