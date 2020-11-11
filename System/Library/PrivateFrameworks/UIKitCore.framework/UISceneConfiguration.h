/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIStoryboard;

@interface UISceneConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hadResolutionErrorsOnLoad;
	BOOL _isDefault;
	BOOL _fromPlist;
	NSString* _name;
	NSString* _role;
	Class _sceneClass;
	Class _delegateClass;
	UIStoryboard* _storyboard;

}

@property (nonatomic,readonly) BOOL _hadResolutionErrorsOnLoad;              //@synthesize hadResolutionErrorsOnLoad=_hadResolutionErrorsOnLoad - In the implementation block
@property (nonatomic,readonly) BOOL _isDefault;                              //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,readonly) BOOL _fromPlist;                              //@synthesize fromPlist=_fromPlist - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * role;                              //@synthesize role=_role - In the implementation block
@property (nonatomic,retain) Class sceneClass; 
@property (nonatomic,retain) Class delegateClass; 
@property (nonatomic,retain) UIStoryboard * storyboard; 
+(BOOL)supportsSecureCoding;
+(id)configurationWithName:(id)arg1 sessionRole:(id)arg2 ;
-(id)_initWithConfiguration:(id)arg1 ;
-(Class)sceneClass;
-(id)init;
-(id)_initWithLoadErrorForSessionRole:(id)arg1 ;
-(unsigned long long)hash;
-(Class)delegateClass;
-(id)initWithName:(id)arg1 sessionRole:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegateClass:(Class)arg1 ;
-(BOOL)_fromPlist;
-(void)setSceneClass:(Class)arg1 ;
-(UIStoryboard *)storyboard;
-(NSString *)name;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)role;
-(BOOL)_hadResolutionErrorsOnLoad;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isDefault;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStoryboard:(UIStoryboard *)arg1 ;
@end
