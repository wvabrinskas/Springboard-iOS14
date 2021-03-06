/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet, NSArray;

@interface UIPasteConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSMutableOrderedSet* _acceptableTypes;

}

@property (nonatomic,copy) NSArray * acceptableTypes; 
@property (nonatomic,copy) NSArray * acceptableTypeIdentifiers; 
+(BOOL)supportsSecureCoding;
+(id)_pasteConfigurationForAcceptingClasses:(id)arg1 ;
+(id)pasteConfigurationForAcceptingClasses:(id)arg1 ;
+(id)pasteConfigurationWithAcceptableTypes:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)acceptableTypeIdentifiers;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)acceptableTypes;
-(void)setAcceptableTypes:(NSArray *)arg1 ;
-(id)initWithAcceptableTypes:(id)arg1 ;
-(void)addTypeIdentifiersForAcceptingClass:(Class)arg1 ;
-(void)setAcceptableTypeIdentifiers:(NSArray *)arg1 ;
-(id)initWithAcceptableTypeIdentifiers:(id)arg1 ;
-(void)addAcceptableTypeIdentifiers:(id)arg1 ;
-(id)initWithTypeIdentifiersForAcceptingClass:(Class)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

