/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchML/TMLReactiveValue.h>

@class NSString, TMLContext, NSArray;

@interface TMLExpressionReactiveValue : TMLReactiveValue {

	NSString* _expression;
	TMLContext* _context;
	NSArray* _bindings;

}
-(id)value;
-(id)initWithExpression:(id)arg1 context:(id)arg2 bindings:(id)arg3 valueType:(unsigned long long)arg4 ;
@end

