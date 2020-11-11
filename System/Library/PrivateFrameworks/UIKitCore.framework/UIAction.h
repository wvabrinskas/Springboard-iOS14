/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMenuElement.h>
#import <UIKitCore/_UIMenuLeaf.h>

@class NSString, UIImage;

@interface UIAction : UIMenuElement <_UIMenuLeaf> {

	BOOL _requiresAuthenticatedInput;
	NSString* _discoverabilityTitle;
	NSString* _identifier;
	unsigned long long _attributes;
	long long _state;
	id _sender;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                       //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle;                  //@synthesize discoverabilityTitle=_discoverabilityTitle - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id sender;                                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthenticatedInput;              //@synthesize requiresAuthenticatedInput=_requiresAuthenticatedInput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)actionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)actionWithHandler:(/*^block*/id)arg1 ;
-(id)_immutableCopy;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(void)setDiscoverabilityTitle:(NSString *)arg1 ;
-(long long)_leafKeyModifierFlags;
-(NSString *)discoverabilityTitle;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 ;
-(id)_leafAlternates;
-(id)_leafKeyInput;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(void)setAttributes:(unsigned long long)arg1 ;
-(id)sender;
-(id)_resolvedTargetFromFirstTarget:(id)arg1 ;
-(void)_performActionWithSender:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setImage:(UIImage *)arg1 ;
-(long long)state;
-(BOOL)requiresAuthenticatedInput;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(BOOL)isLeaf;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)_performWithTarget:(id)arg1 ;
-(id)_spiRepresentation;
-(void)setHandler:(id)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 discoverabilityTitle:(id)arg4 attributes:(unsigned long long)arg5 state:(long long)arg6 handler:(/*^block*/id)arg7 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 deferredElementVisit:(/*^block*/id)arg4 ;
-(id)handler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3 ;
-(unsigned long long)attributes;
-(BOOL)_isDefaultCommand;
@end
