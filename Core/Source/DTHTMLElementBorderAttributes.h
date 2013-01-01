//
//  DTHTMLElementBorderStyle.h
//  DTCoreText
//
//  Created by Ron Cirka on 12/31/12.
//  Copyright (c) 2012 Drobnik.com. All rights reserved.
//


@interface DTHTMLElementBorderAttributes : NSObject

@property (assign, nonatomic) CGFloat width;
@property (strong, nonatomic) NSString* style; // border type
@property (strong, nonatomic) UIColor* color;

@end
