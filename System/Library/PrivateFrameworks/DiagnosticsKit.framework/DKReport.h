/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface DKReport : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _components;

}

@property (nonatomic,readonly) NSArray * components;              //@synthesize components=_components - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)reportWithComponents:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithComponents:(id)arg1 ;
-(NSArray *)components;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)arrayForJSON;
-(id)reportByMergingReport:(id)arg1 ;
@end

