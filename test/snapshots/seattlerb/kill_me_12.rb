ProgramNode(0...17)(
  [],
  StatementsNode(0...17)(
    [CallNode(0...17)(
       nil,
       nil,
       IDENTIFIER(0...1)("f"),
       nil,
       nil,
       nil,
       BlockNode(2...17)(
         [IDENTIFIER(5...6)("a"), IDENTIFIER(12...13)("b")],
         BlockParametersNode(4...15)(
           ParametersNode(5...14)(
             [RequiredParameterNode(5...6)(),
              RequiredDestructuredParameterNode(8...14)(
                [SplatNode(9...10)(USTAR(9...10)("*"), nil),
                 RequiredParameterNode(12...13)()],
                (8...9),
                (13...14)
              )],
             [],
             [],
             nil,
             [],
             nil,
             nil
           ),
           [],
           (4...5),
           (14...15)
         ),
         nil,
         (2...3),
         (16...17)
       ),
       "f"
     )]
  )
)
